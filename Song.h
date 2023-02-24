#pragma once
#include <cstdint>
#include <Model.h>
#include "Input.h"
#include "DebugText.h"


class Song
{
private:
	Input* input_ = nullptr;
	DebugText* debugText_ = nullptr;

	uint32_t textureHandle_ = 0;
	Sprite* spriteSong_;
	WorldTransform worldTransform_;

public:
	Song();
	/// <summary>
	/// ‰Šú‰»
	/// </summary>
	void Initialize();
	/// <summary>
	/// XV
	/// </summary>
	void Update();
	/// <summary>
	/// •`‰æ
	/// </summary>
	void Draw();

	Vector3 GetPosition()
	{
		return worldTransform_.translation_;
	}
};

