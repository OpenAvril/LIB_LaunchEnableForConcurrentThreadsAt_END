#include "pch.h"

// pointers.
	// classes.
	OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework::_stat_CLASS_ptr_LaunchConcurrency = NULL;
	// registers.

// public.
	// constructor.
	OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework::LaunchEnableForConcurrentThreadsAt_END_Framework()
	{
		std::cout << "entered CONSTRUCTOR LaunchEnableForConcurrentThreadsAt_END_Framework()" << std::endl;
		stat_CLASS_create_ptr_LaunchConcurrency();
		stat_CLASS_get_ptr_LaunchConcurrency()->dyn_initialise_Control();
		std::cout << "exiting CONSTRUCTOR LaunchEnableForConcurrentThreadsAt_END_Framework()" << std::endl;
	}

	// destructor.
	OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework::~LaunchEnableForConcurrentThreadsAt_END_Framework()
	{
		delete _stat_CLASS_ptr_LaunchConcurrency;
	}

	// dynamic.
		// create.
	void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework::dyn_initialise(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* obj)
	{
		std::cout << "entered dyn_initialise()" << std::endl;
		uint8_t* newINISIALISED_Value = new uint8_t(4);
		while (newINISIALISED_Value == NULL) {}
		obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_initialise_number_Implemented_Threads(newINISIALISED_Value);//NUMBER OF THREADS
		delete newINISIALISED_Value;
		
		bool* newINISIALISED_Flag = new bool(true);
		while (newINISIALISED_Flag == NULL) {}
		obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_initialise_flag_core_ACTIVE(newINISIALISED_Flag);
		delete newINISIALISED_Flag;

		bool* newINITIALISED_Flagbit1 = new bool(false);
		while (newINITIALISED_Flagbit1 == NULL) {}
		obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_initialise_flag_praisinglaunch(newINITIALISED_Flagbit1);
		delete newINITIALISED_Flagbit1;
		
		uint32_t* newINITIALISED_uint32_t = new uint32_t(UINT32_MAX);
		while (newINITIALISED_uint32_t == NULL) {}
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
		while (newINITIALISED_int8_t == NULL) {}
		obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_initialise_concurrentCycle_Try_CoreId_Index(newINITIALISED_int8_t);
		obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_initialise_new_concurrentCycle_Try_CoreId_Index(newINITIALISED_int8_t);
		delete newINITIALISED_int8_t;
		
		std::cout << "exiting dyn_initialise()" << std::endl;
	}
		// get.
	OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework::dyn_CLASS_get_ptr_LaunchConcurrency()
	{
		return stat_CLASS_get_ptr_LaunchConcurrency();
	}
		// set.
	// static.
		// create.
		// get.
	OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework::stat_CLASS_get_ptr_LaunchConcurrency()
	{
		return _stat_CLASS_ptr_LaunchConcurrency;
	}
		// set.

// private.
	// dynamic.
		// classes.
			// create.
			// get.
			// set.
		// registers.
			// create.
			// get.
			// set.
	// static.
		// classes.
			// create.
	void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework::stat_CLASS_create_ptr_LaunchConcurrency()
	{
		std::cout << "enterred stat_CLASS_create_ptr_LaunchConcurrency()" << std::endl;
		_stat_CLASS_ptr_LaunchConcurrency = new class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END();
		while (stat_CLASS_get_ptr_LaunchConcurrency() == NULL) { /* wait untill stat_created */ }
		std::cout << "exiting stat_CLASS_create_ptr_LaunchConcurrency()" << std::endl;
	}
			// get.
			// set.
		// registers.
			// create.
			// get.
			// set.