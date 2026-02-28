#include "pch.h"

// pointers.
	// classes.
	OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework::_ptr_LaunchConcurrency = NULL;
	// registers.

// constructor.
	OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework::LaunchEnableForConcurrentThreadsAt_END_Framework()
	{
		stat_create_ptr_LaunchConcurrency();
	}

// destructor.
	OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework::~LaunchEnableForConcurrentThreadsAt_END_Framework()
	{

	}

// public.
	// dynamic.
	void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework::initialise(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* obj)
	{
		uint8_t* newINISIALISED_Value = new uint8_t(4);
		obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->initialise_number_Implemented_Threads(newINISIALISED_Value);//NUMBER OF THREADS
		delete newINISIALISED_Value;
		bool* newINISIALISED_Flag = new bool(true);
		obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->initialise_flag_core_ACTIVE(newINISIALISED_Flag);
		*newINISIALISED_Flag = false;
		obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->initialise_flag_core_IDLE(newINISIALISED_Flag);
		delete newINISIALISED_Flag;
		obj->get_ptr_LaunchConcurrency()->initialise_Control(obj);
		bool* newINITIALISED_Flagbit1 = new bool(false);
		obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->initialise_flag_praisinglaunch(newINITIALISED_Flagbit1);
		delete newINITIALISED_Flagbit1;
		uint32_t* newINITIALISED_uint32_t = new uint32_t(UINT32_MAX);
		for (uint8_t concurrenctThreadID = 0; concurrenctThreadID < (obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_number_Implemented_Threads() - 1); concurrenctThreadID++)
		{
			obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->initialise_Item_On_list_Of_launchActive_Count_For_ThreadID(concurrenctThreadID, newINITIALISED_uint32_t);
			obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->initialise_Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrenctThreadID, newINITIALISED_uint32_t);
		}
		delete newINITIALISED_uint32_t;
		for (uint8_t slotID = 0; slotID < (obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_number_Implemented_Threads() - 1); slotID++)
		{
			obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->initialise_Item_On_list_Of_Que_Of_CoreTolaunch(slotID);
		}
		uint8_t* newINITIALISED_int8_t = new uint8_t(UINT8_MAX);
		obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->initialise_concurrentCycle_Try_CoreId_Index(newINITIALISED_int8_t);
		obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->initialise_new_concurrentCycle_Try_CoreId_Index(newINITIALISED_int8_t);
		delete newINITIALISED_int8_t;
	}
		// get.
	OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework::get_ptr_LaunchConcurrency()
	{
		return stat_get_ptr_LaunchConcurrency();
	}
		// set.
	// static.

// private.
	// dynamic.
		// get.
		// set.
	// static.
	void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework::stat_create_ptr_LaunchConcurrency()
	{
		stat_set_ptr_LaunchConcurrency(new class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END());
		while (stat_get_ptr_LaunchConcurrency() == NULL) { /* wait untill stat_created */ }
	}
		// get.
	OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework::stat_get_ptr_LaunchConcurrency()
	{
		return _ptr_LaunchConcurrency;
	}
		// set.
	void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework::stat_set_ptr_LaunchConcurrency(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END* concurrentQue)
	{
		_ptr_LaunchConcurrency = concurrentQue;
	}