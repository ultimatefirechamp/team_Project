#include"stdafx.h"
#include "Player.h"
#include<iostream>
Player::~Player() {
	delete(trs);
	delete(sprite_);
	delete(input_);

}

void Player::Render() {
	sprite_->Render();
}

void Player::GetDamaged(int damage) {
	hp -= damage;
	if (hp <= 0) {
		IsAlive = false;
		hp = 0;
	}
}

void Player::move(Tile* tile) {

}

void Player::Attack(Character* monster) {
	monster->GetDamaged(10);
}