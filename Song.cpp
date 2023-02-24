#include "Song.h"
#include "SetMatrix.h"

Song::Song()
{
	textureHandle_ = TextureManager::Load("0001.png");
	spriteSong_ = Sprite::Create(textureHandle_, {900,450});
	
	worldTransform_.Initialize();
}

void Song::Initialize()
{
	input_ = Input::GetInstance();
	debugText_ = DebugText::GetInstance();

	worldTransform_.scale_ = { 0.5f,0.5f,0.5f };
	worldTransform_.translation_ = { 0.0f,0.0f,0.0f };

	worldTransform_.matWorld_ = CreatematWorld(worldTransform_);
	worldTransform_.TransferMatrix();
}

void Song::Update()
{
	/*if (input_->PushKey(DIK_D))
	{
		worldTransform_.translation_.x += 10.5f;
	}
	if (input_->PushKey(DIK_A))
	{
		worldTransform_.translation_.x -= 10.5f;
	}*/

	worldTransform_.matWorld_ = CreatematWorld(worldTransform_);
	worldTransform_.TransferMatrix();
}

void Song::Draw()
{
	spriteSong_->Draw();
}
