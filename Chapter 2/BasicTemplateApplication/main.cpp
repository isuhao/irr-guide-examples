#include <irrlicht.h>
using namespace irr;
using namespace core;
using namespace video;

#pragma comment(lib, "Irrlicht.lib")

int main()
{
    IrrlichtDevice* device = createDevice(irr::video::EDT_DIRECT3D9,
        dimension2d<u32>(800, 600), 32, false, true, true, 0);

    if(!device)
    {
        printf("Failed while creating device...\n");
        return 1;
    }

    device->drop();

    return 0;
}