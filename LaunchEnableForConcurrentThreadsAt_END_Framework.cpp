#include "pch.h"
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework::_stat_CLASS_ptr_LaunchConcurrency = NULL;
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework::LaunchEnableForConcurrentThreadsAt_END_Framework()
{
	stat_CLASS_create_ptr_LaunchConcurrency();
	stat_CLASS_get_ptr_LaunchConcurrency()->dyn_initialise_Control();
}
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework::~LaunchEnableForConcurrentThreadsAt_END_Framework()
{
	delete _stat_CLASS_ptr_LaunchConcurrency;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework::dyn_initialise(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* obj)
{
	uint8_t* newINISIALISED_Value = new uint8_t(4);
	obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_initialise_number_Implemented_Threads(newINISIALISED_Value);//NUMBER OF THREADS
	delete newINISIALISED_Value;
	bool* newINISIALISED_Flag = new bool(true);
	obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_initialise_flag_core_ACTIVE(newINISIALISED_Flag);
	delete newINISIALISED_Flag;
	bool* newINITIALISED_Flagbit1 = new bool(false);
	obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_initialise_flag_praisinglaunch(newINITIALISED_Flagbit1);
	delete newINITIALISED_Flagbit1;
	uint32_t* newINITIALISED_uint32_t = new uint32_t(UINT32_MAX);
	for (uint8_t concurrenctThreadID = 0; concurrenctThreadID < (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Implemented_Threads() - 1); concurrenctThreadID++)
	{
		obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_initialise_Item_On_list_Of_launchActive_Count_For_ThreadID(concurrenctThreadID, newINITIALISED_uint32_t);
		obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_initialise_Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrenctThreadID, newINITIALISED_uint32_t);
	}
	delete newINITIALISED_uint32_t;
	for (uint8_t slotID = 0; slotID < (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Implemented_Threads() - 1); slotID++)
	{
		obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_initialise_Item_On_list_Of_Que_Of_CoreTolaunch(slotID);
	}
	uint8_t* newINITIALISED_int8_t = new uint8_t(UINT8_MAX);
	obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_initialise_concurrentCycle_Try_CoreId_Index(newINITIALISED_int8_t);
	obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_initialise_new_concurrentCycle_Try_CoreId_Index(newINITIALISED_int8_t);
	delete newINITIALISED_int8_t;
}
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework::dyn_CLASS_get_ptr_LaunchConcurrency()
{
	return stat_CLASS_get_ptr_LaunchConcurrency();
}
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework::stat_CLASS_get_ptr_LaunchConcurrency()
{
	return _stat_CLASS_ptr_LaunchConcurrency;
}
void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework::stat_CLASS_create_ptr_LaunchConcurrency()
{
	_stat_CLASS_ptr_LaunchConcurrency = new class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END();
	while (stat_CLASS_get_ptr_LaunchConcurrency() == NULL) { /* wait untill stat_created */ }
}