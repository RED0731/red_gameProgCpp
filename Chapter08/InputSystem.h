// ----------------------------------------------------------------
// From Game Programming in C++ by Sanjay Madhav
// Copyright (C) 2017 Sanjay Madhav. All rights reserved.
// 
// Released under the BSD License
// See LICENSE in root directory for full details.
// ----------------------------------------------------------------

#pragma once
#include <SDL/SDL_scancode.h>

// The different button states
enum ButtonState
{
	ENone,
	EPressed,
	EReleased,
	EHeld
};

// Helper for Keyboard input
class KeyboardState
{
public:
	friend class InputSystem;
	bool GetKeyValue(SDL_Scancode code) const;
	ButtonState GetKeyState(SDL_Scancode code) const;
private:
	const Uint8* mCurrState;
	const Uint8 mPrevState[SDL_NUM_SCANCODES];
};

// Wrapper that contains current state of input
struct InputState
{
	KeyboardState Keyboard;
};

class InputSystem
{
public:
	InputSystem();
	bool Initialize();
	void Shutdown();

	// Called right before SDL_PollEvents loop
	void PrepareForUpdate();
	// Called after SDL_PollEvents loop
	void Update();

	const InputState& GetState() const { return mState; }
private:
	InputState mState;
};
