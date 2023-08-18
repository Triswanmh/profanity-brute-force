#ifndef HPP_DISPATCHER
#define HPP_DISPATCHER

#include <stdexcept>
#include <fstream>
#include <string>
#include <vector>
#include <mutex>
#include <unordered_map>
#include <chrono>

#ifdef __ANDROID__
#include <CL/cl.h>
#else
#include <CL/cl.h>
#endif

// Other includes...
// ...

class Dispatcher {
    private:
        class OpenCLException : public std::runtime_error {
            // OpenCLException implementation...
        };

        struct Device {
            // Device implementation...
        };

    public:
        Dispatcher(cl_context & clContext, cl_program & clProgram, const Mode mode, const size_t worksizeMax, const size_t inverseSize, const size_t inverseMultiple, const cl_uchar clScoreQuit = 0);
        ~Dispatcher();

        // Other public member functions...
        // ...

    private:
        // Private member functions...
        // ...

    private: /* Instance variables */
        cl_context & m_clContext;
        cl_program & m_clProgram;
        const Mode m_mode;
        const size_t m_worksizeMax;
        const size_t m_inverseSize;
        const size_t m_size;
        const size_t m_HashTableSize;
        cl_uchar m_clScoreMax;
        cl_uchar m_clScoreQuit;

        std::vector<Device *> m_vDevices;

        cl_event m_eventFinished;

        // Other private instance variables...
        // ...
};

#endif /* HPP_DISPATCHER */
