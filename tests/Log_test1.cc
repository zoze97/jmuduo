#include <muduo/base/Logging.h>
#include <errno.h>

using namespace muduo;

int main()
{
    LOG_TRACE << "trace ...";
    LOG_DEBUG << "debug ...";
    LOG_INFO << "info ...";
    LOG_WARN << "warn ...";
    LOG_ERROR << "error ...";
    errno = 13;
    LOG_SYSERR << "syserr ...";
    return 0;
}