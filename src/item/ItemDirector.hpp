#pragma once

#include <rk_types.h>

#include "kart/KartObject.hpp"

#include "egg/core/eggDisposer.hpp"
#include "egg/math/eggVector.hpp"

namespace Item {

class ItemDirector : public EGG::Disposer {
public:
    ItemDirector();
    ~ItemDirector();

    void calc();
    void calcItems();
    void calcPlayers();
    int checkKartCollision(Kart::KartObject *kartObj);
    static ItemDirector *CreateInstance();
    void DestroyInstance();
    void unk807999a0();
    void unk80799a50();
    void unk80799fbc(s32 objId, EGG::Vector3f *spawnPos, EGG::Vector3f *r6, u32 r7);
    void unk8079a3b8(s32 r4);
    void unk8079a498(s32 playerId);
    void unk8079a578(u32 playerId, u32 otherPlayerId);
    void unk8079a5f4(s32 r4);
    void unk8079a654(f64 f1, EGG::Vector3f *r4, u32 r5);
    void init();
    void initItemDirect();
    void spawnDirect(s32 objId, s32 r5, EGG::Vector3f *r6, u32 playerId);
    void spawnTc(s32 playerId);

private:
    u8 m_playerCount;
    u8 _011[0x430 - 0x011];

    static ItemDirector *spInstance;
};
static_assert(sizeof(ItemDirector) == 0x430);

} // namespace Item
