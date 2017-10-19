///-------------------------------------------------------------------------------------------------
/// File:	GameConfiguration.h.
///
/// Summary:	Declares the game configuration class.
///-------------------------------------------------------------------------------------------------

#ifndef __GAME_CONFIG_H__
#define __GAME_CONFIG_H__


/// Summary:	The game title.
static constexpr const char*		GAME_TITLE							{ "BountyHunter Demo" };

/// Summary:	True if first player is human
static constexpr bool				HAS_HUMAN_PLAYER					{ true };

/// Summary:	The default player name.
static constexpr const char*		DEFAULT_PLAYER_NAME					{ "BountyHunter" };


// <<<< GAME WINDOW SETTINGS >>>>

/// Summary:	Width of the game window.
static constexpr unsigned int		GAME_WINDOW_WIDTH					{ 1024 };

/// Summary:	Height of the game window.
static constexpr unsigned int		GAME_WINDOW_HEIGHT					{ 1024 };

/// Summary:	True if game should start in fullscreen mode.
static constexpr bool				GAME_WINDOW_FULLSCREEN				{ false };



// <<<< GAME WORLD SETTINGS >>>>
 
/// Summary:	Defines the delta time step the game simulation will be advanced per update.
static constexpr float				DELTA_TIME_STEP						{ 1.0f / 60.0f };

/// Summary:	The world up vector.
static constexpr float				WORLD_UP_VECTOR[2]					{ 0.0f, 1.0f };

/// Summary:	The world min and max bounds.
static constexpr float				WORLD_BOUND_MIN[2]					{ -100.0f, -100.0f };
static constexpr float				WORLD_BOUND_MAX[2]					{  100.0f,  100.0f };

// <<<< GAME PHYSICS >>>>
 
/// Summary:	The world gravity.
static constexpr float				WORLD_GRAVITY[2]					{ 0.0f, 0.0f };

static constexpr size_t				PHYSICS_VELOCITY_ITERATIONS			{ 8 };

static constexpr size_t				PHYSICS_POSITION_ITERATIONS			{ 6 };


// <<<< GAME META SETTINGS >>>>

/// Summary:	The max. player amount.
static constexpr size_t				MAX_PLAYER							{ 2 };

/// Summary:	The max. amount of spawned bounty.
static constexpr size_t				MAX_BOUNTY							{ 3 };

/// Summary:	The default collector respawntime.
static constexpr float				COLLECTOR_RESPAWNTIME				{ 5.0f }; // seconds

/// Summary:	The default bounty respawntime.
static constexpr float				BOUNTY_RESPAWNTIME					{ 2.0f }; // seconds

/// Summary:	Collector max move speed.
static constexpr float				COLLECTOR_MAX_MOVE_SPEED			{ 25.0f }; // 25m/s

/// Summary:	Collector max turn speed.
static constexpr float				RADIANS								{ 0.0174533f };
static constexpr float				TURN								{ 360.0f * RADIANS }; // 360 = 1 turn
static constexpr float				COLLECTOR_MAX_TURN_SPEED			{ TURN };

// <<<< DEBUG SETTINGS >>>>

///-------------------------------------------------------------------------------------------------
/// Def:	DEBUG_SHOW_SPAWNS
///
/// Summary:	If defined, show spawns
///
/// Author:	Tobias Stein
///
/// Date:	14/10/2017
///-------------------------------------------------------------------------------------------------

#define DEBUG_SHOW_SPAWNS												1

/// Summary:	Enable/Disable CheatSystem
static constexpr bool				ALLOW_CHEATS						{ true };

#endif // __GAME_CONFIG_H__
