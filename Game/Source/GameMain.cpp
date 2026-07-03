#include <DxLib.h>

#include "NetworkTypes.h"
#include "SceneManager.h"

void SetupGame() {
  auto& SM = SceneManager::GetInstance();
  // SM.RegisterLevelPath(, ".BLevel");

  // SM.OpenSceneById();
  SetMouseDispFlag(1);
}
