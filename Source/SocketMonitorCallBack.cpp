#include "SocketMonitorCallBack.hpp"


namespace CppSocket
{
	SocketMonitorCallBack::SocketMonitorCallBack()
    {
		;
    }
	SocketMonitorCallBack::~SocketMonitorCallBack()
	{
		std::cout << "decon SocketMonitorCallBack" << std::endl;
	}
	int SocketMonitorCallBack::onAccpet(SocketMonitor*, Connection conn_in)
    {
        return 0;
    }
	int SocketMonitorCallBack::onMessage(SocketMonitor*, Connection conn_in, std::string msg_in)
    {
        return 0;
    }
	int SocketMonitorCallBack::onRemove(SocketMonitor*, Connection conn_in)
    {
        return 0;
    }
}
        