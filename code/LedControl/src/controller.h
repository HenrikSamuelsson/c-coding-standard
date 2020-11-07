/*
 * controller.h
 *
 *  Created on: 24 Oct 2020
 *      Author: Henrik
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_

/**
 * \brief      LED controller task function.
 *
 * \details    Will turn the blue led on or off depending on the state of a
 *             user controlled switch button.
 *
 *             Shall be by invoked repeatedly during program execution.
 *
 * \param      Void.
 *
 * \return     Void.
 */
void controllerTask(void);

#endif /* CONTROLLER_H_ */
