#ifndef __ZEPHYR_BEHAVIOUR_H_
#define __ZEPHYR_BEHAVIOUR_H_

// a behaviour manages several subwidgets within the zephyr window class
// e.g. a system window or browser
typedef struct zephyr_behaviour {
  int b_id; // id of behaviour
} ZephyrBehaviour;

typedef ZephyrBehaviour *ZephyrBehaviourPtr;	

ZephyrBehaviourPtr make_zephyr_behaviour(int id,
					ZephyrBehaviourPtr zb);

void delete_zephyr_behaviour(ZephyrBehaviourPtr zb);

#endif
