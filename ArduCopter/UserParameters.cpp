#include "UserParameters.h"

// "USR" + 13 chars remaining for param name
const AP_Param::GroupInfo UserParameters::var_info[] = {

    // Put your parameters definition here
    // Note the maximum length of parameter name is 13 chars
    AP_GROUPINFO("_INT8", 0, UserParameters, _int8, 0),
    AP_GROUPINFO("_INT16", 1, UserParameters, _int16, 0),
    AP_GROUPINFO("_FLOAT", 2, UserParameters, _float, 0),
//新增参数
    AP_GROUPINFO("_LADRC_w0", 3, UserParameters, _w0, 1),

    AP_GROUPEND
};

UserParameters::UserParameters()
{
    AP_Param::setup_object_defaults(this, var_info);
}
