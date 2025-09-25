# Simulation de Saut en Parachute en C

📌 **Objectif**  
Implémenter un programme en **C** qui simule la chute libre d’un parachutiste en prenant en compte :  
- La masse du parachutiste  
- La vitesse de chute  
- L’accélération  
- L’altitude  
- La résistance de l’air (surface de frottement)  

Le programme détecte et affiche :  
- Le dépassement de la vitesse du son  
- L’atteinte de la vitesse maximale  
- L’ouverture du parachute en dessous de 2500 m  

---

## 🔧 Outils

- **Langage** : C  
- **Compilation / Exécution** : GCC, Code::Blocks, ou tout IDE C  
- **Résultats** : affichage dans la console sous forme de tableau (temps, altitude, vitesse, accélération)  

---

## 📊 Méthodologie

### Conception et implémentation
1. Déclaration des constantes physiques : gravité, masse, surface initiale, etc.  
2. Initialisation des variables (altitude initiale, vitesse initiale, temps, accélération).  
3. Simulation de la descente par équations différentielles discrétisées.  
4. Détection et affichage des événements :  
   - Dépassement de la vitesse du son (343 m/s)  
   - Atteinte de la vitesse maximale (accélération < 0.5 m/s²)  
   - Ouverture du parachute à 2500 m (surface de frottement augmentée).  

---

## 📊 Algorithme testé

- **Chute libre avec frottement** : équations basées sur un modèle exponentiel  
- **Événements dynamiques** : conditions `if` pour détecter le son, la vitesse max, et l’ouverture du parachute  
- **Complexité temporelle** : O(n) avec n = nombre de secondes simulées  

---

## ✅ Résultats

- Affichage ligne par ligne de l’évolution du parachutiste :
 
t, height, speed, accel
0, 39000.0000, 0.0000, 9.81000
1, 38990.1934, 9.7031, 9.78622
...

Hatem exceeds the speed of sound
Hatem has reached his maximum speed
Hatem opens his parachute

- La simulation illustre bien les différentes phases de la chute.  

---

## 🚀 Perspectives

- Améliorer le réalisme en intégrant :  
- La variation de la densité de l’air avec l’altitude  
- Les forces de vent latéral  
- Un modèle graphique (visualisation 2D/3D).  
- Étendre la simulation avec une interface utilisateur ou une visualisation interactive.  

---

## 💾 Contenu du dépôt GitHub

- `main.c` : Code source en C  
- `Mini Project Report.pdf` : Rapport complet du projet  
- `README.md` : Documentation du projet  

- Affichage ligne par ligne de l’évolution du parachutiste :  
