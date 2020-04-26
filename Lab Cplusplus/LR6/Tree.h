//---------------------------------------------------------------------------

#ifndef TreeH
#define TreeH
//---------------------------------------------------------------------------
#endif
#include <exception>
using namespace std;

class MyException : public exception

{
	public:
	 MyException(char *msg) : exception(msg)
	{

    }



};
