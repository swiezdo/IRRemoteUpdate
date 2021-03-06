void arrowPosition_Methode() {
  /*
     Здесь мы меняем значение положения стрелочки с
     каждым нажатием кнопки для последующей отрисовки
     в соответствуещем меню, подоразумевается, что с каждым
     нажатием, стрелочка будет спускатся вниз на одну ступень
  */
  arrowPosition++; //инкремент
  /*Если стрелочка не на начальной позиции (спустилась вниз), отрисовать пустышку на месте где она была до этого*/
  if (arrowPosition != 2) lcd.print(F(" "), 4, (arrowPosition - 1));
  /*
     Если стрелочка прошла последнюю позицию,
     отрисовать пустышку на её месте в последней
     позиции где она была до этого, и вернуть
     стрелочку на начальную позицию
  */
  if (arrowPosition > 5) {
    arrowPosition = 2;
    lcd.print(F(" "), 4, 5);
  }
}
