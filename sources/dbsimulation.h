#ifndef DBSIMULATION_H
#define DBSIMULATION_H
#include "../sources/Database.h"
#include <memory>
#include <map>
#include <set>
#include <QMainWindow>
class DBsimulation
{
public:
    DBsimulation(DBsimulation&) = delete;
    void operator=(const DBsimulation&) = delete;
    static DBsimulation* getDBsimulation();
public:
    static std::map<std::string, std::vector<QMainWindow*>>* getActiveUsers();
    static void kickActiveUser(const std::string&);
    static std::shared_ptr<Database> getDbPtr();
    static void addMainWindow(const std::string&, QMainWindow*);
    static bool isBanned(const std::string&);
    static void addToBanList(const std::string&);
private:
    DBsimulation();
    static DBsimulation* m_dbs;
    std::shared_ptr<Database> m_dbPtr;
    std::map<std::string, std::vector<QMainWindow*>> m_activeUsers;
    std::set <std::string> banlist;
};

#endif // DBSIMULATION_H
