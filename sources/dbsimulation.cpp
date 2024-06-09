#include "../sources/dbsimulation.h"


DBsimulation* DBsimulation::m_dbs = nullptr;
DBsimulation::DBsimulation()
{
    std::map<int, std::vector<QMainWindow*>> m_activeUsers;
    m_dbPtr = std::make_shared<Database>();
}

std::shared_ptr<Database> DBsimulation::getDbPtr()
{
    return DBsimulation::getDBsimulation()->m_dbPtr;
}

void DBsimulation::addMainWindow(const std::string & login, QMainWindow* window)
{
    DBsimulation::getDBsimulation()->m_activeUsers[login].push_back(window);
}

bool DBsimulation::isBanned(const string & user_name)
{
    if (DBsimulation::getDBsimulation()->banlist.find(user_name) != DBsimulation::getDBsimulation()->banlist.end()){
        return true;
    }
    return false;
}

void DBsimulation::addToBanList(const string & name)
{
    DBsimulation::getDBsimulation()->banlist.insert(name);
}


DBsimulation* DBsimulation::getDBsimulation()
{
    if (m_dbs == nullptr) {
         m_dbs = new DBsimulation();
    }
    return m_dbs;
}

std::map<std::string, std::vector<QMainWindow *> >* DBsimulation::getActiveUsers()
{
    return &(DBsimulation::getDBsimulation()->m_activeUsers);
}

void DBsimulation::kickActiveUser(const std::string& login)
{
    if (getDBsimulation()->m_activeUsers.find(login) == getDBsimulation()->m_activeUsers.end()) return;
    for(std::size_t i = 0; i < (*getActiveUsers()).at(login).size(); i++){
        (getDBsimulation()->m_activeUsers[login])[i]->~QMainWindow();
    }
    getDBsimulation()->m_activeUsers[login].clear();
}
