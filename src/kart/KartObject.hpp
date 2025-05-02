#pragma once

#include <rk_types.h>

#include "KartObjectProxy.hpp"
#include "KartPhysicsEngine.hpp"
#include "KartSettings.hpp"

namespace Kart {
    class KartObject : public KartObjectProxy {
        private:
            u8 _0c[0x10 - 0x0c];
            KartPhysicsEngine *m_physicsEngine;
            KartSettings *m_settings;
            u8 _18[0x80 - 0x18];
    };
    static_assert(sizeof(KartObject) == 0x80);
}
