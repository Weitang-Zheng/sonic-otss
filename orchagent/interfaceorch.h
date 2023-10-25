#pragma once

#include "otaiobjectorch.h"

class InterfaceOrch: public LaiObjectOrch
{
public:
    InterfaceOrch(DBConnector *db, std::vector<TableConnector>& connectors);
    void setFlexCounter(otai_object_id_t id, vector<otai_attribute_t> &attrs);
    void clearFlexCounter(otai_object_id_t id, string key);
};

