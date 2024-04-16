#include <stdint.h>
#include <stddef.h>

using namespace std;

int OutOfBoundAccess(const uint8_t *Data, size_t Datasize) {

    return Datasize >=3 &&
	    Data[0] == '2' &&
	    Data[1] == '3' &&
	    Data[2] == '4' &&
	    Data[3] == '5'; /* Aqui tem coragem */

}

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size) {
	OutOfBoundAccess(Data, Size);
	return 0;
}
