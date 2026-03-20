#include "pch.h"
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::_stat_CLASS_ptr_Global;
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::_stat_CLASS_ptr_LaunchConcurrency_Control;
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::LaunchEnableForConcurrentThreadsAt_END()
{
    boot0_CLASS_DECLAIRE_LaunchEnableForConcurrentThreadsAt_END();
    boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_END();
    boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_END();
    boot0_REG_DECLAIRE_LaunchEnableForConcurrentThreadsAt_END();
}
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::~LaunchEnableForConcurrentThreadsAt_END()
{
    delete _stat_CLASS_ptr_Global;
    delete _stat_CLASS_ptr_LaunchConcurrency_Control;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::app_thread_Start(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrentThreadID)
{
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->app_launchEnable_Request(obj, concurrentThreadID);
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->app_launchQue_Update(obj, obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Implemented_Threads());
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->app_launchEnable_SortQue(obj, obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Implemented_Threads());
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->app_launchEnable_Activate(obj);
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->app_launchQue_Update(obj, obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Implemented_Threads());
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->app_launchEnable_SortQue(obj, obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Implemented_Threads());
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_flag_praisinglaunch(false);
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::app_thread_End(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrentThreadID)
{
    while (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_flag_praisinglaunch() == true)
    {

    }
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_flag_praisinglaunch(true);
    obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_concurrentCycle_Try_CoreId_Index(obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_new_concurrentCycle_Try_CoreId_Index());
    if (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_concurrentCycle_Try_CoreId_Index() == concurrentThreadID)
    {
        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(concurrentThreadID, obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_IDLE());
    }
    else
    {
        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_new_concurrentCycle_Try_CoreId_Index(obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_concurrentCycle_Try_CoreId_Index() + 1);

        if (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_new_concurrentCycle_Try_CoreId_Index() == 3)//NUMBER OF CONCURNT CORES
        {
            obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_new_concurrentCycle_Try_CoreId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_flag_praisinglaunch(false);
        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->app_thread_End(obj, concurrentThreadID);
    }
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::boot0_CLASS_DECLAIRE_LaunchEnableForConcurrentThreadsAt_END()
{
	std::cout << "entered boot0_CLASS_DECLAIRE_LaunchEnableForConcurrentThreadsAt_END_Framework()." << std::endl;

	std::cout << "exiting boot0_CLASS_DECLAIRE_LaunchEnableForConcurrentThreadsAt_END_Framework()." << std::endl;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_END()
{
	std::cout << "entered boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_END_Framework()." << std::endl;
    stat_CLASS_boot1_DEFINE_Global();
    stat_CLASS_boot1_DEFINE_WriteEnable_Control();
	std::cout << "exiting boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_END_Framework()." << std::endl;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_END()
{
	std::cout << "entered boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_END()." << std::endl;
    stat_CLASS_boot3_INITIALISE_Global();
    stat_CLASS_boot3_INITIALISE_LaunchConcurrency_Control();
	std::cout << "exiting boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_END()." << std::endl;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::boot0_REG_DECLAIRE_LaunchEnableForConcurrentThreadsAt_END()
{
	std::cout << "entered boot0_REG_DECLAIRE_LaunchEnableForConcurrentThreadsAt_END()." << std::endl;

	std::cout << "exiting boot0_REG_DECLAIRE_LaunchEnableForConcurrentThreadsAt_END()." << std::endl;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_END()
{
	std::cout << "entered boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_END()." << std::endl;
    
	std::cout << "exiting boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_END()." << std::endl;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_END()
{
	std::cout << "entered boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_END()." << std::endl;

	std::cout << "exiting boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_END()." << std::endl;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_END()
{
	std::cout << "entered boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_END()." << std::endl;

	std::cout << "exiting boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_END()." << std::endl;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::boot4_PGM_INSTANTIATE_LaunchEnableForConcurrentThreadsAt_END()
{
	std::cout << "entered boot4_PGM_INSTANTIATE_LaunchEnableForConcurrentThreadsAt_END()." << std::endl;

	std::cout << "exiting boot4_PGM_INSTANTIATE_LaunchEnableForConcurrentThreadsAt_END()." << std::endl;
}
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::dyn_CLASS_get_ptr_Global()
{
    return stat_CLASS_get_ptr_Global();
}
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::dyn_CLASS_get_ptr_LaunchConcurrency_Control()
{
    return stat_CLASS_get_ptr_LaunchConcurrency_Control();
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::stat_CLASS_boot1_DEFINE_Global()
{
    _stat_CLASS_ptr_Global = NULL;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::stat_CLASS_boot1_DEFINE_WriteEnable_Control()
{
    _stat_CLASS_ptr_LaunchConcurrency_Control = NULL;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::stat_CLASS_boot3_INITIALISE_Global()
{
    _stat_CLASS_ptr_Global = new OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global();
    while (stat_CLASS_get_ptr_Global() == NULL) { }
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::stat_CLASS_boot3_INITIALISE_LaunchConcurrency_Control()
{
    _stat_CLASS_ptr_LaunchConcurrency_Control = new OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control();
    while (stat_CLASS_get_ptr_LaunchConcurrency_Control() == NULL) { }
}
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Global* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::stat_CLASS_get_ptr_Global()
{
    return _stat_CLASS_ptr_Global;
}
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END::stat_CLASS_get_ptr_LaunchConcurrency_Control()
{
	return _stat_CLASS_ptr_LaunchConcurrency_Control;
}