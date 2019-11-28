#ifndef RPG_DEBUG_HPP
#define RPG_DEBUG_HPP

#define _WIN32_WINNT 0x0502
#include <DynRPG/Utility/Win32.hpp>

namespace RPG
{
/*! \brief Attach a console window to RPG_RT.exe for debugging

	1. Include this file before including DynRPG.hpp
	2. call attachConsole(pluginName) in the onStartup() callback

	\note This class is NOT included by default

	Example:
	\code
#include <DynRPG/Debug.hpp> // Place before DynRPG.hpp -- Important!
#include <DynRPG/DynRPG.hpp>

...

bool onStartup(char *pluginName)
{
RPG::Debug::attachConsole(pluginName);
return true;
}
	\endcode
*/

struct Debug
{
	static void attachConsole(char*& pluginName);
	~Debug();

private:
	static void freeConsole();

	static bool s_consoleAttached;
};
}

#endif // RPG_DEBUG_HPP