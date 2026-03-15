#ifdef LAUNCHENABLEFORCONCURRENTTHREADSATEND_EXPORTS
#define LAUNCHENABLEFORCONCURRENTTHREADSATEND_API __declspec(dllexport)
#else
#define LAUNCHENABLEFORCONCURRENTTHREADSATEND_API __declspec(dllimport)
#endif

namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND
{
	class LAUNCHENABLEFORCONCURRENTTHREADSATEND_API CLIBLaunchEnableForConcurrentThreadsAtEND 
	{
	public:
// constructor.
		CLIBLaunchEnableForConcurrentThreadsAtEND();

// destructor.

// public.
	// dynamic.
		// get.
		// set.
	// static.
		static void* generate_Program();
		static void request_Wait_launch(void* obj, unsigned char* bytes);
		static void thread_End(void* obj, unsigned char* bytes);
		// get.
		static unsigned char* get_coreId_To_launch(void* obj);
		static bool get_Flag_Active(void* obj);
		static bool get_Flag_ConcurrentCoreState(void* obj, unsigned char* bytes);
		static bool get_Flag_Idle(void* obj);
		static bool get_State_launchBit(void* obj);
		// set.
		static void set_Flag_ConcurrentCoreState(void* obj, unsigned char* bytes, bool newValue);

	private:
// private.
	// dynamic.
		// get.
		// set.
	// static.
		static void stat_create_ptr_Framework();
		// get.
		static LaunchEnableForConcurrentThreadsAt_END_Framework* stat_get_ptr_Framework();
		// set.
	// pointers.
		// classes.
		
		// registers.
	};
}