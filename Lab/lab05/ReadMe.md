<p align="center">МИНИСТЕРСТВО НАУКИ  И ВЫСШЕГО ОБРАЗОВАНИЯ РОССИЙСКОЙ ФЕДЕРАЦИИ<br>
Федеральное государственное автономное образовательное учреждение высшего образования<br>
"КРЫМСКИЙ ФЕДЕРАЛЬНЫЙ УНИВЕРСИТЕТ им. В. И. ВЕРНАДСКОГО"<br>
ФИЗИКО-ТЕХНИЧЕСКИЙ ИНСТИТУТ<br>
Кафедра компьютерной инженерии и моделирования</p>
<br>
<h3 align="center">Отчёт по лабораторной работе №5<br> по дисциплине "Программирование"</h3>
<br><br>
<p>студенти 1 курса группы ПИ-б-о-201(2)<br>
Абибулаева Эмине Ридван къызы<br>
направления подготовки 09.03.04 "Программная инженерия"</p>
<br><br>
<table>
<tr><td>Научный руководитель<br> старший преподаватель кафедры<br> компьютерной инженерии и моделирования</td>
<td>(оценка)</td>
<td>Чабанов В.В.</td>
</tr>
</table>
<br><br>
<p align="center">Симферополь, 2021</p>
<hr>

## Постановка задачи

Создать десктоп приложение с GUI позволяющее сохранять текстовую информацию в изображение формата png без видимого изменения исходного изображения. Приложение должно позволять сохранять текст в картинку и извлекать текст из картинки.

## Цель работы

1. Изучить базовые встроенные элементы фреймворка Qt предназначенные для создания приложений с графическим интерфейсом пользователя (GUI);
2. Изучить сигнально-слотовую систему, как один из способов организации взаимодействия компонентов GUI;
3. Получить практический навык работы с побитовыми операторами.

## Выполнение работы

1. Подготовлю графический интерфейс с помощью Qt Designer для работы с кодировкой и декодировкой изображений.
<br>
<img src=./1.jpg>
Рис. 1 - Интерфейс
<br>
2. Подключила файл с графическим интерфейсом к проекту и написала код на языке `C++`. Первым делом привязываю кнопки к функциям, а уже далее - расписываю функции каждой кнопки. Подходя к концу и написав код функции декодировки, я декодирую изображение и нахожу зашифрованное сообщение: "Его зовут - `Rick Astley` и он обещал - `показать трейлер GTA VI`."
3. Зашифрую текст в этой же картинке
<br>
<img src=./2.png>
Рис. 2 - Картинка с зашифрованным текстом
<br>
4. Подключив графический интерфейс к коду для питона без использования классов, выполняю аналогичную последовательность для Python.
### Вывод

В ходе лабораторной работы я :
   - изучил базовые встроенные элементы фреймворка Qt предназначенные для создания приложений с GUI;
   - изучил сигнально-слотовую систему, как один из способов организации взаимодействия компонентов GUI;
   - получил практический навык работы с побитовыми операторами.
 
