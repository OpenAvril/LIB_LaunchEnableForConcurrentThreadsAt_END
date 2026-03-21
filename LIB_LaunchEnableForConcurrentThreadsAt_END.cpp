#include "pch.h"
#include "framework.h"
#include "LIB_LaunchEnableForConcurrentThreadsAt_END.h"
class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* _ptr_Framework_LaunchEnableForConcurrentThreadsAt_END;
void* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::generate_Program()
{
    std::cout << "started Classes - DECLAIRE, DEFINE INITIALISE, Registers - DECLAIRE." << std::endl;
    stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_END_Framework();
    stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_END_Framework();
    std::cout << "done Classes - DECLAIRE, DEFINE INITIALISE, Registers - DECLAIRE." << std::endl;

    std::cout << "started Registers - DEFINE" << std::endl;
    stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework()->boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_END_Framework(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework());
    std::cout << "done Registers - DEFINE." << std::endl;

    std::cout << "started Registers - SUBSTANTIATE." << std::endl;
    stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework()->boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_END_Framework(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework());
    std::cout << "done Registers - SUBSTANTIATE." << std::endl;

    std::cout << "started Registers - INITIALISE." << std::endl;
    stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework()->boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_END_Framework(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework());
    std::cout << "done Registers - INITIALISE." << std::endl;

    std::cout << "started Program - INSTANTIATE." << std::endl;
    stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework()->boot4_PGM_INSTANTIATE_LaunchEnableForConcurrentThreadsAt_END_Framework(stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework());
    std::cout << "done Program - INSTANTIATE." << std::endl;

    std::cout << "" << std::endl;
    std::cout << "        ,     \\      /      ," << std::endl;
    std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
    std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
    std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
    std::cout << "|              |\\../|               |" << std::endl;
    std::cout << "|               \\VV/                |" << std::endl;
    std::cout << "|        MIT Launch Que .dll        |" << std::endl;
    std::cout << "|___________________________________|" << std::endl;
    std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
    std::cout << "|  /    V          ))        V   \\  |" << std::endl;
    std::cout << "|/                //               \\| " << std::endl;
    std::cout << "`                 V                 '" << std::endl;
    std::cout << "" << std::endl;
    return (void*)stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework();
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::terminate_Progaram()
{
    delete _ptr_Framework_LaunchEnableForConcurrentThreadsAt_END;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::request_Wait_launch(void* obj, unsigned char* bytes)
{
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->app_thread_Start(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_Obj_To_ClassOf(obj), OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND ::LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::thread_End(void* obj, unsigned char* bytes)
{
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->app_thread_End(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_Obj_To_ClassOf(obj), (uint8_t)*bytes);
}
unsigned char* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::get_coreId_To_launch(void* obj)
{
    return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_uint8_t_To_ByteArray(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(0));
}
bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::get_Flag_Active(void* obj)
{
    return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_ACTIVE();
}
bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::get_Flag_ConcurrentCoreState(void* obj, unsigned char* bytes)
{
    return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
}
bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::get_Flag_Idle(void* obj)
{
    return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_IDLE();
}
bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::get_State_launchBit(void* obj)
{
    return OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(0));
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::set_Flag_ConcurrentCoreState(void* obj, unsigned char* bytes, bool newValue)
{
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global::stat_CONVERT_Obj_To_ClassOf(obj)->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->stat_CONVERT_ByteArray_To_uint8_t(bytes), newValue);
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::stat_boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_END_Framework()
{
    _ptr_Framework_LaunchEnableForConcurrentThreadsAt_END = NULL;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::stat_boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_END_Framework()
{
    _ptr_Framework_LaunchEnableForConcurrentThreadsAt_END = new OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework();
    while (stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework() == NULL) {}
}
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::CLIBLaunchEnableForConcurrentThreadsAtEND::stat_CLASS_get_ptr_LaunchEnableForConcurrentThreadsAt_END_Framework()
{
    return _ptr_Framework_LaunchEnableForConcurrentThreadsAt_END;
}