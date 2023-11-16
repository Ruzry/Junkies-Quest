#pragma once
#include <SFML\Graphics.hpp>
#include <vector>

class Animation
{
private:

public:
	Animation();

	// Create animation
	void addFrame(sf::IntRect rect);
	void setFrameSpeed(float speed);
	int getSize();

	// update/reset animation
	void animate(float dt);
	void reset();

	// get current frame of animation
	sf::IntRect getCurrentFrame();
	int getCurrentFrameNumber() { return currentFrame; }

	// Animation controls
	float getFrameSpeed() { return animationSpeed; };
	void setFlipped(bool flip) { flipped = flip; };
	bool getFlipped() {	return flipped;	};
	void setLooping(bool loop) { isLooping = loop; };
	bool getLooping() { return isLooping; };
	void setPlaying(bool play) { isPlaying = play; };
	bool getPlaying() { return isPlaying; };

protected:
	std::vector<sf::IntRect>frames;
	sf::IntRect frame;
	int currentFrame;
	float animationSpeed;	// in FPS
	bool flipped;
	bool isLooping;
	bool isPlaying;
	float elapsedTime;
};