#include "db.h"

DB::DB(){

}


void DB::setManager(QNetworkAccessManager* manager) {
    m_manager = manager;
}
