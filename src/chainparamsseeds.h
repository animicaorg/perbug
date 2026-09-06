#ifndef PERBUG_CHAINPARAMSSEEDS_H
#define PERBUG_CHAINPARAMSSEEDS_H

/**
 * Fixed seed nodes for Perbug.
 *
 * Intentionally left empty for initial launch.
 * Perbug currently relies on runtime vSeeds entries defined in chainparams.cpp,
 * including the explicit seed node 144.126.133.21.
 *
 * Declared as zero-sized std::array rather than `uint8_t[] = {}`, which MSVC
 * rejects (C2466) — a zero-length C array is a GCC/Clang extension.
 *
 * Once you have stable public nodes, regenerate this file with:
 *   contrib/seeds/generate-seeds.py
 */

#include <array>
#include <cstdint>

static constexpr std::array<uint8_t, 0> chainparams_seed_main{};

static constexpr std::array<uint8_t, 0> chainparams_seed_test{};

static constexpr std::array<uint8_t, 0> chainparams_seed_testnet4{};

static constexpr std::array<uint8_t, 0> chainparams_seed_signet{};

#endif // PERBUG_CHAINPARAMSSEEDS_H
