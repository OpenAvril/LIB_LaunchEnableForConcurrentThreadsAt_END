#include "pch.h"

    uint8_t* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::_stat_REG_ptr_concurrentCycle_Try_CoreId_Index = NULL;
    bool* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::_stat_REG_ptr_flag_praisinglaunch = NULL;
    std::list<uint32_t>* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::_stat_REG_ptr_list_Of_launchActive_Count_For_ThreadID = NULL;
    std::list<uint32_t>* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::_stat_REG_ptr_list_Of_launchIdle_Count_For_ThreadID = NULL;
    std::list<bool>* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::_stat_REG_ptr_list_Of_STATE_For_ConcurrentCore = NULL;
    std::list<uint8_t>* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::_stat_REG_ptr_list_for_Que_Of_CoreTolaunch = NULL;
    uint8_t* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::_stat_REG_ptr_new_concurrentCycle_Try_CoreId_Index = NULL;
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::LaunchEnableForConcurrentThreadsAt_END_Control()
    {
        bool* newDEFAULT_Flagbit1 = new bool(true);
        stat_REG_create_flag_praisinglaunch(newDEFAULT_Flagbit1);
        delete newDEFAULT_Flagbit1;
        uint32_t* newDEFAULT_uint32_t = new uint32_t(UINT32_MAX);
        stat_REG_create_list_Of_launchActive_Count_For_ThreadID(newDEFAULT_uint32_t);
        stat_REG_create_list_Of_launchIdle_Count_For_ThreadID(newDEFAULT_uint32_t);
        delete newDEFAULT_uint32_t;
        stat_REG_create_list_for_Que_Of_CoreTolaunch();
        uint8_t* newDEFAULT_int8_t = new uint8_t(INT8_MAX);
        stat_REG_create_concurrentCycle_Try_CoreId_Index(newDEFAULT_int8_t);
        stat_REG_create_new_concurrentCycle_Try_CoreId_Index(newDEFAULT_int8_t);
        delete newDEFAULT_int8_t;
    }
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::~LaunchEnableForConcurrentThreadsAt_END_Control()
    {
        delete _stat_REG_ptr_concurrentCycle_Try_CoreId_Index;
        delete _stat_REG_ptr_flag_praisinglaunch;
        delete _stat_REG_ptr_new_concurrentCycle_Try_CoreId_Index;
        delete _stat_REG_ptr_list_Of_launchActive_Count_For_ThreadID;
        delete _stat_REG_ptr_list_Of_launchIdle_Count_For_ThreadID;
        delete _stat_REG_ptr_list_Of_STATE_For_ConcurrentCore;
        delete _stat_REG_ptr_list_for_Que_Of_CoreTolaunch;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::launchEnable_Activate(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* obj)
    {
        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(0), obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_ACTIVE());
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::launchEnable_Request(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrentThreadID)
    {
        while (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(0)) != obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_IDLE())
        {

        }
        while (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_flag_praisinglaunch() == true)
        {
            obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dynamicStagger(obj, concurrentThreadID);
        }
        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_flag_praisinglaunch(true);
        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_concurrentCycle_Try_CoreId_Index(dyn_REG_get_new_concurrentCycle_Try_CoreId_Index());
        if (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_concurrentCycle_Try_CoreId_Index() == concurrentThreadID)
        {
            //exit
        }
        else
        {
            obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_new_concurrentCycle_Try_CoreId_Index(dyn_REG_get_concurrentCycle_Try_CoreId_Index() + 1);
            if (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_concurrentCycle_Try_CoreId_Index() == 3)//NUMBER OF CONCURRENT  THREADS
            {
                obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_new_concurrentCycle_Try_CoreId_Index(0);
            }
            obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_flag_praisinglaunch(false);
            obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->launchEnable_Request(obj, concurrentThreadID);
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::launchEnable_SortQue(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t number_Implemented_Threads)
    {
        for (uint8_t index_A = 0; index_A < number_Implemented_Threads - 2; index_A++)
        {
            for (uint8_t index_B = index_A + 1; index_B < number_Implemented_Threads - 1; index_B++)
            {
                if (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(index_A)) == obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_ACTIVE())
                {
                    if (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(index_B)) == obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_IDLE())
                    {
                        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->launchEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(index_B)) == obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_ACTIVE())
                    {
                        if (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_launchActive_Count_For_ThreadID(index_A) > obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_launchActive_Count_For_ThreadID(index_B))
                        {
                            obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->launchEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(index_A)) == obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_IDLE())

                    if (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(index_B)) == obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_flag_thread_2STATE_IDLE())
                    {
                        if (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_launchIdle_Count_For_ThreadID(index_A) < obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_launchIdle_Count_For_ThreadID(index_B))
                        {
                            obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->launchEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
            }
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::launchQue_Update(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t number_Implemented_Threads)
    {
        for (uint8_t index = 0; index < number_Implemented_Threads; index++)
        {
            switch (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(index))
            {
            case false:
            {
                obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_launchActive_Count_For_ThreadID(index, 0);
                obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_launchIdle_Count_For_ThreadID(index, obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_launchActive_Count_For_ThreadID(index) + 1);
                break;
            }
            case true:
            {
                obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_launchActive_Count_For_ThreadID(index, obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_launchIdle_Count_For_ThreadID(index) + 1);
                obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_launchIdle_Count_For_ThreadID(index, 0);
                break;
            }
            }
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::dyn_REG_initialise_concurrentCycle_Try_CoreId_Index(uint8_t* newINITIALISED_Value)
    {
        stat_REG_set_concurrentCycle_Try_CoreId_Index(*newINITIALISED_Value);
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::dyn_REG_initialise_flag_praisinglaunch(bool* newINITIALISED_Flagbit)
    {
        stat_REG_set_flag_praisinglaunch(*newINITIALISED_Flagbit);
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::dyn_REG_initialise_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t* newINITIALISED_Value)
    {
        auto temp = stat_REG_get_ptr_list_Of_launchActive_Count_For_ThreadID()->begin();
        std::advance(temp, concurrenctThreadID);
        *temp = *newINITIALISED_Value;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::dyn_REG_initialise_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t* newINITIALISED_Value)
    {
        auto temp = stat_REG_get_ptr_list_Of_launchIdle_Count_For_ThreadID()->begin();
        std::advance(temp, concurrenctThreadID);
        *temp = *newINITIALISED_Value;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::dyn_REG_initialise_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrenct_threadID, LaunchEnableForConcurrentThreadsAt_END_Global* ptr_Global)
    {
        stat_REG_set_Item_On_list_Of_STATE_For_ConcurrentCore(concurrenct_threadID, ptr_Global->dyn_REG_get_ptr_flag_thread_2STATE_IDLE());
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::dyn_REG_initialise_new_concurrentCycle_Try_CoreId_Index(uint8_t* _new_concurrentCycle_Try_CoreId_Index)
    {
        stat_REG_set_new_concurrentCycle_Try_CoreId_Index(*_new_concurrentCycle_Try_CoreId_Index);
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::dyn_REG_initialise_Item_On_list_Of_Que_Of_CoreTolaunch(uint8_t slotID)
    {
        auto temp = stat_REG_get_ptr_List_QUE_Of_CoreTolaunch()->begin();
        std::advance(temp, slotID);
        *temp = slotID;
    }
    uint8_t OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::dyn_REG_get_concurrentCycle_Try_CoreId_Index()
    {
        return *stat_REG_get_ptr_concurrentCycle_Try_CoreId_Index();
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::dyn_REG_get_flag_praisinglaunch()
    {
        return *stat_REG_get_ptr_flag_praisinglaunch();
    }
    uint32_t OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::dyn_REG_get_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t threadID)
    {
        auto temp = stat_REG_get_ptr_list_Of_launchActive_Count_For_ThreadID()->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    uint32_t OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::dyn_REG_get_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t threadID)
    {
        auto temp = stat_REG_get_ptr_list_Of_launchIdle_Count_For_ThreadID()->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrenct_threadID)
    {
        auto temp = stat_REG_get_ptr_list_Of_STATE_For_ConcurrentCore()->begin();
        std::advance(temp, concurrenct_threadID);
        return *temp;
    }
    uint8_t OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t concurrenct_threadID)
    {
        auto temp = stat_REG_get_ptr_List_QUE_Of_CoreTolaunch()->begin();
        std::advance(temp, concurrenct_threadID);
        return *temp;
    }
    uint8_t OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::dyn_REG_get_new_concurrentCycle_Try_CoreId_Index()
    {
        return *stat_REG_get_ptr_new_concurrentCycle_Try_CoreId_Index();
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::set_concurrentCycle_Try_CoreId_Index(uint8_t newValue)
    {
        stat_REG_set_concurrentCycle_Try_CoreId_Index(newValue);
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::set_flag_praisinglaunch(bool newFlag)
    {
        stat_REG_set_flag_praisinglaunch(newFlag);
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::set_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t newValue)
    {
        auto temp = stat_REG_get_ptr_list_Of_launchActive_Count_For_ThreadID()->begin();
        std::advance(temp, concurrenctThreadID);
        *temp = newValue;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::set_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t newValue)
    {
        auto temp = stat_REG_get_ptr_list_Of_launchIdle_Count_For_ThreadID()->begin();
        std::advance(temp, concurrenctThreadID);
        *temp = newValue;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::set_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrenct_threadID, bool newState)
    {
        auto temp = stat_REG_get_ptr_list_Of_STATE_For_ConcurrentCore()->begin();
        std::advance(temp, concurrenct_threadID);
        *temp = newState;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::set_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t slot, uint8_t concurrenct_threadID)
    {
        auto temp = stat_REG_get_ptr_List_QUE_Of_CoreTolaunch()->begin();
        std::advance(temp, slot);
        *temp = concurrenct_threadID;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::set_new_concurrentCycle_Try_CoreId_Index(uint32_t newValue)
    {
        stat_REG_set_new_concurrentCycle_Try_CoreId_Index(newValue);
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::dynamicStagger(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrentThreadID)
    {
        if (obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_concurrentCycle_Try_CoreId_Index() == concurrentThreadID)
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
        temp_Int = obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadID_A);
        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadID_A, obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadID_B));
        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadID_B, temp_Int);

        temp_Int = obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrentThreadID_A);
        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrentThreadID_A, obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrentThreadID_B));
        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrentThreadID_B, temp_Int);

        uint8_t temp_UnnsignedChar;
        temp_UnnsignedChar = obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadID_A);
        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadID_A, obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadID_B));
        obj->dyn_CLASS_get_ptr_LaunchConcurrency()->dyn_CLASS_get_ptr_LaunchConcurrency_Control()->set_Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadID_B, temp_UnnsignedChar);
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_REG_create_concurrentCycle_Try_CoreId_Index(uint8_t* newDEFAULT_Value)
    {
        _stat_REG_ptr_concurrentCycle_Try_CoreId_Index = new uint8_t(NULL);
        while (stat_REG_get_ptr_concurrentCycle_Try_CoreId_Index() == NULL) {}
        *_stat_REG_ptr_concurrentCycle_Try_CoreId_Index = *newDEFAULT_Value;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_REG_create_flag_praisinglaunch(bool* newDEFAULT_Flagbit)
    {
        _stat_REG_ptr_flag_praisinglaunch = new bool(NULL);
        while (stat_REG_get_ptr_flag_praisinglaunch() == NULL) {}
        *_stat_REG_ptr_flag_praisinglaunch = *newDEFAULT_Flagbit;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_REG_create_list_Of_launchActive_Count_For_ThreadID(uint32_t* newDEFAULT_Value)
    {
        _stat_REG_ptr_list_Of_launchActive_Count_For_ThreadID = new std::list<uint32_t>(NULL);
        while (stat_REG_get_ptr_list_Of_launchActive_Count_For_ThreadID() == NULL) {}
        *_stat_REG_ptr_list_Of_launchActive_Count_For_ThreadID = { NULL, NULL, NULL };//NUMBEROF CONCURRENT THREADS
        for (uint8_t concurrentThreadID = 0; concurrentThreadID < sizeof(*stat_REG_get_ptr_list_Of_launchActive_Count_For_ThreadID()); concurrentThreadID++)
        {
            stat_REG_set_Item_On_list_Of_launchActive_Count_For_ThreadID(concurrentThreadID, *newDEFAULT_Value);
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_REG_create_list_Of_launchIdle_Count_For_ThreadID(uint32_t* newDEFAULT_Value)
    {
        _stat_REG_ptr_list_Of_launchIdle_Count_For_ThreadID = new std::list<uint32_t>(NULL);
        while (stat_REG_get_ptr_list_Of_launchIdle_Count_For_ThreadID() == NULL) {}
        *_stat_REG_ptr_list_Of_launchIdle_Count_For_ThreadID = { NULL, NULL, NULL };//NUMBEROF CONCURRENT THREADS
        for (uint8_t concurrentThreadID = 0; concurrentThreadID < sizeof(*stat_REG_get_ptr_list_Of_launchIdle_Count_For_ThreadID()); concurrentThreadID++)
        {
            stat_REG_set_Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrentThreadID, *newDEFAULT_Value);
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_REG_create_list_Of_STATE_For_ConcurrentCore(bool* newDEFAULT_FlagBit)
    {
       _stat_REG_ptr_list_Of_STATE_For_ConcurrentCore = new std::list<bool>(NULL);
        while (stat_REG_get_ptr_list_Of_STATE_For_ConcurrentCore() == NULL) {}
        *_stat_REG_ptr_list_Of_STATE_For_ConcurrentCore = { NULL, NULL, NULL };//NUMBEROF CONCURRENT THREADS
        for (uint8_t concurrentThreadID = 0; concurrentThreadID < sizeof(*stat_REG_get_ptr_list_Of_STATE_For_ConcurrentCore()); concurrentThreadID++)
        {
            stat_REG_set_Item_On_list_Of_STATE_For_ConcurrentCore(concurrentThreadID, *newDEFAULT_FlagBit);
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_REG_create_list_for_Que_Of_CoreTolaunch()
    {
        _stat_REG_ptr_list_Of_STATE_For_ConcurrentCore = new std::list<bool>(NULL);
        while (stat_REG_get_ptr_List_QUE_Of_CoreTolaunch() == NULL) {}
        *_stat_REG_ptr_list_Of_STATE_For_ConcurrentCore = { NULL, NULL, NULL };//NUMBEROF CONCURRENT THREADS
        for (uint8_t concurrentThreadID = 0; concurrentThreadID < sizeof(*stat_REG_get_ptr_List_QUE_Of_CoreTolaunch()); concurrentThreadID++)
        {
            stat_REG_set_Item_On_list_for_Que_Of_CoreTolaunch(concurrentThreadID, concurrentThreadID);
        }
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_REG_create_new_concurrentCycle_Try_CoreId_Index(uint8_t* newDEFAULT_Value)
    {
        _stat_REG_ptr_new_concurrentCycle_Try_CoreId_Index = new uint8_t(NULL);
        while (stat_REG_get_ptr_new_concurrentCycle_Try_CoreId_Index() == NULL) {}
        *_stat_REG_ptr_new_concurrentCycle_Try_CoreId_Index = *newDEFAULT_Value;
    }
    uint8_t* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_REG_get_ptr_concurrentCycle_Try_CoreId_Index()
    {
        return _stat_REG_ptr_concurrentCycle_Try_CoreId_Index;
    }
    bool* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_REG_get_ptr_flag_praisinglaunch()
    {
        return _stat_REG_ptr_flag_praisinglaunch;
    }
    std::list<uint32_t>* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_REG_get_ptr_list_Of_launchActive_Count_For_ThreadID()
    {
        return _stat_REG_ptr_list_Of_launchActive_Count_For_ThreadID;
    }
    std::list<uint32_t>* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_REG_get_ptr_list_Of_launchIdle_Count_For_ThreadID()
    {
        return _stat_REG_ptr_list_Of_launchIdle_Count_For_ThreadID;
    }
    std::list<bool>* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_REG_get_ptr_list_Of_STATE_For_ConcurrentCore()
    {
        return _stat_REG_ptr_list_Of_STATE_For_ConcurrentCore;
    }
    std::list<uint8_t>* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_REG_get_ptr_List_QUE_Of_CoreTolaunch()
    {
        return _stat_REG_ptr_list_for_Que_Of_CoreTolaunch;
    }
    uint8_t* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_REG_get_ptr_new_concurrentCycle_Try_CoreId_Index()
    {
        return _stat_REG_ptr_new_concurrentCycle_Try_CoreId_Index;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_REG_set_concurrentCycle_Try_CoreId_Index(uint8_t newValue)
    {
        *_stat_REG_ptr_concurrentCycle_Try_CoreId_Index = newValue;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_REG_set_flag_praisinglaunch(bool newFlag)
    {
        *_stat_REG_ptr_flag_praisinglaunch = newFlag;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_REG_set_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t newValue)
    {
        auto temp = stat_REG_get_ptr_list_Of_launchActive_Count_For_ThreadID()->begin();
        std::advance(temp, concurrenctThreadID);
        *temp = newValue;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_REG_set_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t newValue)
    {
        auto temp = stat_REG_get_ptr_list_Of_launchIdle_Count_For_ThreadID()->begin();
        std::advance(temp, concurrenctThreadID);
        *temp = newValue;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_REG_set_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrenct_threadID, bool newState)
    {
        auto temp = stat_REG_get_ptr_list_Of_STATE_For_ConcurrentCore()->begin();
        std::advance(temp, concurrenct_threadID);
        *temp = newState;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_REG_set_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t slot, uint8_t concurrenct_threadID)
    {
        auto temp = stat_REG_get_ptr_List_QUE_Of_CoreTolaunch()->begin();
        std::advance(temp, slot);
        *temp = concurrenct_threadID;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND::LaunchEnableForConcurrentThreadsAt_END_Control::stat_REG_set_new_concurrentCycle_Try_CoreId_Index(uint32_t newValue)
    {
        *_stat_REG_ptr_new_concurrentCycle_Try_CoreId_Index = newValue;
    }