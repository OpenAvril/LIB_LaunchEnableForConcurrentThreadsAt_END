#include "pch.h"

// pointers.
    // classes.
    // registers.
    uint8_t* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::_ptr_concurrentCycle_Try_CoreId_Index = NULL;
    bool* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::_ptr_flag_praisinglaunch = NULL;
    std::list<uint32_t>* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::_ptr_list_Of_launchActive_Count_For_ThreadID = NULL;
    std::list<uint32_t>* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::_ptr_list_Of_launchIdle_Count_For_ThreadID = NULL;
    std::list<bool>* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::_ptr_list_Of_STATE_For_ConcurrentCore = NULL;
    std::list<uint8_t>* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::_ptr_list_for_Que_Of_CoreTolaunch = NULL;
    uint8_t* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::_ptr_new_concurrentCycle_Try_CoreId_Index = NULL;

// constructor.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::LaunchEnableForConcurrentThreadsAt_END_Control()
    {
        bool* newDEFAULT_Flagbit1 = new bool(false);
        create_flag_praisinglaunch(newDEFAULT_Flagbit1);
        delete newDEFAULT_Flagbit1;
        uint32_t* newDEFAULT_uint32_t = new uint32_t(UINT32_MAX);
        create_list_Of_launchActive_Count_For_ThreadID(newDEFAULT_uint32_t);
        create_list_Of_launchIdle_Count_For_ThreadID(newDEFAULT_uint32_t);
        delete newDEFAULT_uint32_t;
        create_list_for_Que_Of_CoreTolaunch();
        uint8_t* newDEFAULT_int8_t = new uint8_t(INT8_MAX);
        create_concurrentCycle_Try_CoreId_Index(newDEFAULT_int8_t);
        create_new_concurrentCycle_Try_CoreId_Index(newDEFAULT_int8_t);
        delete newDEFAULT_int8_t;
    }

// destructor.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::~LaunchEnableForConcurrentThreadsAt_END_Control()
    {
        delete _ptr_concurrentCycle_Try_CoreId_Index;
        delete _ptr_flag_praisinglaunch;
        delete _ptr_new_concurrentCycle_Try_CoreId_Index;
        delete _ptr_list_Of_launchActive_Count_For_ThreadID;
        delete _ptr_list_Of_launchIdle_Count_For_ThreadID;
        delete _ptr_list_Of_STATE_For_ConcurrentCore;
        delete _ptr_list_for_Que_Of_CoreTolaunch;
    }

// public.
    // dynamic.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::initialise_concurrentCycle_Try_CoreId_Index(uint8_t* newINITIALISED_Value)
    {
        stat_set_concurrentCycle_Try_CoreId_Index(*newINITIALISED_Value);
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::initialise_flag_praisinglaunch(bool* newINITIALISED_Flagbit)
    {
        stat_set_flag_praisinglaunch(*newINITIALISED_Flagbit);
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::initialise_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t* newINITIALISED_Value)
    {

        auto temp = stat_get_ptr_list_Of_launchActive_Count_For_ThreadID()->begin();
        std::advance(temp, concurrenctThreadID);
        *temp = *newINITIALISED_Value;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::initialise_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t* newINITIALISED_Value)
    {
        auto temp = stat_get_ptr_list_Of_launchIdle_Count_For_ThreadID()->begin();
        std::advance(temp, concurrenctThreadID);
        *temp = *newINITIALISED_Value;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::initialise_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrenct_threadID, LaunchEnableForConcurrentThreadsAt_END_Global* ptr_Global)
    {
        stat_set_Item_On_list_Of_STATE_For_ConcurrentCore(concurrenct_threadID, ptr_Global->get_flag_core_IDLE());
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::initialise_new_concurrentCycle_Try_CoreId_Index(uint8_t* _new_concurrentCycle_Try_CoreId_Index)
    {
        stat_set_new_concurrentCycle_Try_CoreId_Index(*_new_concurrentCycle_Try_CoreId_Index);
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::initialise_Item_On_list_Of_Que_Of_CoreTolaunch(uint8_t slotID)
    {
        auto temp = stat_get_ptr_list_Of_Que_Of_CoreTolaunch()->begin();
        std::advance(temp, slotID);
        *temp = slotID;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::launchEnable_Activate(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* obj)
    {
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(0), obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_ACTIVE());
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::launchEnable_Request(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrentThreadID)
    {
        while (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(get_Item_On_list_for_Que_Of_CoreTolaunch(0)) != obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_IDLE())
        {

        }
        while (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_flag_praisinglaunch() == true)
        {
            obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->dynamicStagger(obj, concurrentThreadID);
        }
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_flag_praisinglaunch(true);
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_concurrentCycle_Try_CoreId_Index(get_new_concurrentCycle_Try_CoreId_Index());
        if (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_concurrentCycle_Try_CoreId_Index() == concurrentThreadID)
        {
            //exit
        }
        else
        {
            obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_new_concurrentCycle_Try_CoreId_Index(get_concurrentCycle_Try_CoreId_Index() + 1);
            if (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_concurrentCycle_Try_CoreId_Index() == 3)//NUMBER OF CONCURRENT  THREADS
            {
                obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_new_concurrentCycle_Try_CoreId_Index(0);
            }
            obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_flag_praisinglaunch(false);
            obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchEnable_Request(obj, concurrentThreadID);
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::launchEnable_SortQue(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t number_Implemented_Threads)
    {
        for (uint8_t index_A = 0; index_A < number_Implemented_Threads - 2; index_A++)
        {
            for (uint8_t index_B = index_A + 1; index_B < number_Implemented_Threads - 1; index_B++)
            {
                if (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(get_Item_On_list_for_Que_Of_CoreTolaunch(index_A)) == obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_ACTIVE())
                {
                    if (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(get_Item_On_list_for_Que_Of_CoreTolaunch(index_B)) == obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_IDLE())
                    {
                        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                    else if (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_for_Que_Of_CoreTolaunch(index_B)) == obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_ACTIVE())
                    {
                        if (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_launchActive_Count_For_ThreadID(index_A) > obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_launchActive_Count_For_ThreadID(index_B))
                        {
                            obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_for_Que_Of_CoreTolaunch(index_A)) == obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_IDLE())

                    if (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_for_Que_Of_CoreTolaunch(index_B)) == obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_IDLE())
                    {
                        if (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_launchIdle_Count_For_ThreadID(index_A) < obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_launchIdle_Count_For_ThreadID(index_B))
                        {
                            obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
            }
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::launchQue_Update(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t number_Implemented_Threads)
    {
        for (uint8_t index = 0; index < number_Implemented_Threads; index++)
        {
            switch (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(index))
            {
            case false:
            {
                obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_launchActive_Count_For_ThreadID(index, 0);
                obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_launchIdle_Count_For_ThreadID(index, obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_launchActive_Count_For_ThreadID(index) + 1);
                break;
            }
            case true:
            {
                obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_launchActive_Count_For_ThreadID(index, obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_launchIdle_Count_For_ThreadID(index) + 1);
                obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_launchIdle_Count_For_ThreadID(index, 0);
                break;
            }
            }
        }
    }
        // get.
    uint8_t OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::get_concurrentCycle_Try_CoreId_Index()
    {
        return *stat_ptr_get_concurrentCycle_Try_CoreId_Index();
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::get_flag_praisinglaunch()
    {
        return *stat_ptr_get_flag_praisinglaunch();
    }
    uint32_t OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::get_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t threadID)
    {
        auto temp = stat_get_ptr_list_Of_launchActive_Count_For_ThreadID()->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    uint32_t OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::get_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t threadID)
    {
        auto temp = stat_get_ptr_list_Of_launchIdle_Count_For_ThreadID()->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::get_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrenct_threadID)
    {
        auto temp = stat_get_ptr_list_Of_STATE_For_ConcurrentCore()->begin();
        std::advance(temp, concurrenct_threadID);
        return *temp;
    }
    uint8_t OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::get_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t concurrenct_threadID)
    {
        auto temp = stat_get_ptr_list_Of_Que_Of_CoreTolaunch()->begin();
        std::advance(temp, concurrenct_threadID);
        return *temp;
    }
    uint8_t OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::get_new_concurrentCycle_Try_CoreId_Index()
    {
        return *stat_get_ptr_new_concurrentCycle_Try_CoreId_Index();
    }
        // set.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::set_concurrentCycle_Try_CoreId_Index(uint8_t newValue)
    {
        stat_set_concurrentCycle_Try_CoreId_Index(newValue);
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::set_flag_praisinglaunch(bool newFlag)
    {
        stat_set_flag_praisinglaunch(newFlag);
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::set_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t newValue)
    {
        auto temp = stat_get_ptr_list_Of_launchActive_Count_For_ThreadID()->begin();
        std::advance(temp, concurrenctThreadID);
        *temp = newValue;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::set_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t newValue)
    {
        auto temp = stat_get_ptr_list_Of_launchIdle_Count_For_ThreadID()->begin();
        std::advance(temp, concurrenctThreadID);
        *temp = newValue;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::set_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrenct_threadID, bool newState)
    {
        auto temp = stat_get_ptr_list_Of_STATE_For_ConcurrentCore()->begin();
        std::advance(temp, concurrenct_threadID);
        *temp = newState;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::set_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t slot, uint8_t concurrenct_threadID)
    {
        auto temp = stat_get_ptr_list_Of_Que_Of_CoreTolaunch()->begin();
        std::advance(temp, slot);
        *temp = concurrenct_threadID;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::set_new_concurrentCycle_Try_CoreId_Index(uint32_t newValue)
    {
        stat_set_new_concurrentCycle_Try_CoreId_Index(newValue);
    }
    // static.
        // get.
        // set.

// private.
    // dynamic.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::dynamicStagger(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrentThreadID)
    {
        if (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_concurrentCycle_Try_CoreId_Index() == concurrentThreadID)
        {
            //exit early
        }
        else
        {
            int ptr_count = int(0);
            while (ptr_count < 20)//todo time till flag change
            {

                ptr_count = ptr_count + 1;
            }
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::launchEnable_ShiftQueValues(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrentThreadID_A, uint8_t concurrentThreadID_B)
    {
        int temp_Int;
        temp_Int = obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadID_A);
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadID_A, obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadID_B));
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadID_B, temp_Int);

        temp_Int = obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrentThreadID_A);
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrentThreadID_A, obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrentThreadID_B));
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrentThreadID_B, temp_Int);

        uint8_t temp_UnnsignedChar;
        temp_UnnsignedChar = obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadID_A);
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadID_A, obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadID_B));
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadID_B, temp_UnnsignedChar);
    }
        // get.
        // set.
    // static.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::create_concurrentCycle_Try_CoreId_Index(uint8_t* newDEFAULT_Value)
    {
        uint8_t* _ptr_concurrentCycle_Try_CoreId_Index = new uint8_t(UINT_MAX);
        while(stat_ptr_get_concurrentCycle_Try_CoreId_Index() == NULL) { }
        stat_set_concurrentCycle_Try_CoreId_Index(*newDEFAULT_Value);
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::create_flag_praisinglaunch(bool* newDEFAULT_Flagbit)
    {
        bool* _ptr_flag_praisinglaunch = new bool(true);
        while (stat_ptr_get_flag_praisinglaunch() == NULL) {}
        stat_set_flag_praisinglaunch(newDEFAULT_Flagbit);
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::create_list_Of_launchActive_Count_For_ThreadID(uint32_t* newDEFAULT_Value)
    {
        std::list<uint32_t>* _ptr_list_Of_launchActive_Count_For_ThreadID = new std::list<uint32_t>();
        while (stat_get_ptr_list_Of_launchActive_Count_For_ThreadID() == NULL) {}
        *_ptr_list_Of_launchActive_Count_For_ThreadID = { NULL, NULL, NULL };//NUMBEROF CONCURRENT THREADS
        for (uint8_t concurrentThreadID = 0; concurrentThreadID < sizeof(*stat_get_ptr_list_Of_launchActive_Count_For_ThreadID()); concurrentThreadID++)
        {
            stat_set_Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadID, *newDEFAULT_Value);
        }
        
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::create_list_Of_launchIdle_Count_For_ThreadID(uint32_t* newDEFAULT_Value)
    {
        std::list<uint32_t>* _ptr_list_Of_launchIdle_Count_For_ThreadID = new std::list<uint32_t>();
        while (stat_get_ptr_list_Of_launchIdle_Count_For_ThreadID() == NULL) {}
        *_ptr_list_Of_launchIdle_Count_For_ThreadID = { NULL, NULL, NULL };//NUMBEROF CONCURRENT THREADS
        for (uint8_t concurrentThreadID = 0; concurrentThreadID < sizeof(*stat_get_ptr_list_Of_launchIdle_Count_For_ThreadID()); concurrentThreadID++)
        {
            stat_set_Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrentThreadID, *newDEFAULT_Value);
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::create_list_Of_STATE_For_ConcurrentCore(bool* newDEFAULT_FlagBit)
    {
        std::list<uint32_t>* _ptr_list_Of_STATE_For_ConcurrentCore = new std::list<uint32_t>();
        while (stat_get_ptr_list_Of_STATE_For_ConcurrentCore() == NULL) {}
        *_ptr_list_Of_STATE_For_ConcurrentCore = { NULL, NULL, NULL };//NUMBEROF CONCURRENT THREADS
        for (uint8_t concurrentThreadID = 0; concurrentThreadID < sizeof(*stat_get_ptr_list_Of_STATE_For_ConcurrentCore()); concurrentThreadID++)
        {
            stat_set_Item_On_list_Of_STATE_For_ConcurrentCore(concurrentThreadID, *newDEFAULT_FlagBit);
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::create_list_for_Que_Of_CoreTolaunch()
    {
        std::list<bool>* _ptr_list_Of_STATE_For_ConcurrentCore = new std::list<bool>();
        while (stat_get_ptr_list_Of_Que_Of_CoreTolaunch() == NULL) {}
        *_ptr_list_Of_STATE_For_ConcurrentCore = { NULL, NULL, NULL };//NUMBEROF CONCURRENT THREADS
        for (uint8_t concurrentThreadID = 0; concurrentThreadID < sizeof(*stat_get_ptr_list_Of_Que_Of_CoreTolaunch()); concurrentThreadID++)
        {
            stat_set_Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadID, concurrentThreadID);
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::create_new_concurrentCycle_Try_CoreId_Index(uint8_t* newDEFAULT_Value)
    {
        uint8_t* _ptr_new_concurrentCycle_Try_CoreId_Index = new uint8_t(UINT8_MAX);
        while (stat_get_ptr_new_concurrentCycle_Try_CoreId_Index() == NULL) {}
        stat_set_new_concurrentCycle_Try_CoreId_Index(*newDEFAULT_Value);
    }
        // get.
    uint8_t* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_ptr_get_concurrentCycle_Try_CoreId_Index()
    {
        return _ptr_concurrentCycle_Try_CoreId_Index;
    }
    bool* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_ptr_get_flag_praisinglaunch()
    {
        return _ptr_flag_praisinglaunch;
    }
    std::list<uint32_t>* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_get_ptr_list_Of_launchActive_Count_For_ThreadID()
    {
        return _ptr_list_Of_launchActive_Count_For_ThreadID;
    }
    std::list<uint32_t>* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_get_ptr_list_Of_launchIdle_Count_For_ThreadID()
    {
        return _ptr_list_Of_launchIdle_Count_For_ThreadID;
    }
    std::list<bool>* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_get_ptr_list_Of_STATE_For_ConcurrentCore()
    {
        return _ptr_list_Of_STATE_For_ConcurrentCore;
    }
    std::list<uint8_t>* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_get_ptr_list_Of_Que_Of_CoreTolaunch()
    {
        return _ptr_list_for_Que_Of_CoreTolaunch;
    }
    uint8_t* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_get_ptr_new_concurrentCycle_Try_CoreId_Index()
    {
        return _ptr_new_concurrentCycle_Try_CoreId_Index;
    }
        // set.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_set_concurrentCycle_Try_CoreId_Index(uint8_t newValue)
    {
        *_ptr_concurrentCycle_Try_CoreId_Index = newValue;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_set_flag_praisinglaunch(bool newFlag)
    {
        *_ptr_flag_praisinglaunch = newFlag;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_set_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t newValue)
    {
        auto temp = stat_get_ptr_list_Of_launchActive_Count_For_ThreadID()->begin();
        std::advance(temp, concurrenctThreadID);
        *temp = newValue;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_set_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t newValue)
    {
        auto temp = stat_get_ptr_list_Of_launchIdle_Count_For_ThreadID()->begin();
        std::advance(temp, concurrenctThreadID);
        *temp = newValue;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_set_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrenct_threadID, bool newState)
    {
        auto temp = stat_get_ptr_list_Of_STATE_For_ConcurrentCore()->begin();
        std::advance(temp, concurrenct_threadID);
        *temp = newState;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_set_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t slot, uint8_t concurrenct_threadID)
    {
        auto temp = stat_get_ptr_list_Of_Que_Of_CoreTolaunch()->begin();
        std::advance(temp, slot);
        *temp = concurrenct_threadID;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_set_new_concurrentCycle_Try_CoreId_Index(uint32_t newValue)
    {
        *_ptr_new_concurrentCycle_Try_CoreId_Index = newValue;
    }