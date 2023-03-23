#pragma once
#include <cstddef>

// Offsets timestamp
// Thu, 23 Mar 2023 16:42:19 +0300

namespace hazedumper {
namespace netvars {
constexpr ::std::ptrdiff_t m_ArmorValue = 0x117CC;
constexpr ::std::ptrdiff_t m_Collision = 0x320;
constexpr ::std::ptrdiff_t m_CollisionGroup = 0x474;
constexpr ::std::ptrdiff_t m_Local = 0x2FCC;
constexpr ::std::ptrdiff_t m_aimPunchAngle = 0x303C;
constexpr ::std::ptrdiff_t m_bGunGameImmunity = 0x9990;
constexpr ::std::ptrdiff_t m_bHasDefuser = 0x117DC;
constexpr ::std::ptrdiff_t m_bIsDefusing = 0x997C;
constexpr ::std::ptrdiff_t m_bIsScoped = 0x9974;
constexpr ::std::ptrdiff_t m_bSpotted = 0x93D;
constexpr ::std::ptrdiff_t m_bSpottedByMask = 0x980;
constexpr ::std::ptrdiff_t m_dwBoneMatrix = 0x26A8;
constexpr ::std::ptrdiff_t m_fAccuracyPenalty = 0x3340;
constexpr ::std::ptrdiff_t m_fFlags = 0x104;
constexpr ::std::ptrdiff_t m_flFlashDuration = 0x10470;
constexpr ::std::ptrdiff_t m_flFlashMaxAlpha = 0x1046C;
constexpr ::std::ptrdiff_t m_flNextPrimaryAttack = 0x3248;
constexpr ::std::ptrdiff_t m_hActiveWeapon = 0x2F08;
constexpr ::std::ptrdiff_t m_hOwnerEntity = 0x14C;
constexpr ::std::ptrdiff_t m_iClip1 = 0x3274;
constexpr ::std::ptrdiff_t m_iCompetitiveRanking = 0x1A84;
constexpr ::std::ptrdiff_t m_iCompetitiveWins = 0x1B88;
constexpr ::std::ptrdiff_t m_iCrosshairId = 0x11828;
constexpr ::std::ptrdiff_t m_iGlowIndex = 0x10488;
constexpr ::std::ptrdiff_t m_iHealth = 0x100;
constexpr ::std::ptrdiff_t m_iItemDefinitionIndex = 0x2FBA;
constexpr ::std::ptrdiff_t m_iShotsFired = 0x103E0;
constexpr ::std::ptrdiff_t m_iState = 0x3268;
constexpr ::std::ptrdiff_t m_iTeamNum = 0xF4;
constexpr ::std::ptrdiff_t m_lifeState = 0x25F;
constexpr ::std::ptrdiff_t m_nForceBone = 0x268C;
constexpr ::std::ptrdiff_t m_szLastPlaceName = 0x35C4;
constexpr ::std::ptrdiff_t m_vecOrigin = 0x138;
constexpr ::std::ptrdiff_t m_vecVelocity = 0x114;
constexpr ::std::ptrdiff_t m_vecViewOffset = 0x108;
} // namespace netvars
namespace signatures {
constexpr ::std::ptrdiff_t dwClientState_GetLocalPlayer = 0x180;
constexpr ::std::ptrdiff_t dwClientState_Map = 0x28C;
constexpr ::std::ptrdiff_t dwClientState_MapDirectory = 0x188;
constexpr ::std::ptrdiff_t dwClientState_State = 0x220;
constexpr ::std::ptrdiff_t dwEntityList = 0x4E01024;
constexpr ::std::ptrdiff_t dwGameDir = 0x63AD80;
constexpr ::std::ptrdiff_t dwPlayerResource = 0x322D1D0;
constexpr ::std::ptrdiff_t dwRadarBase = 0x5237AFC;
} // namespace signatures
} // namespace hazedumper
