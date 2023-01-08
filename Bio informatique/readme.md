# Manipulation des séquences nucléotides (ADN et ARN) en BioInformatique


![GitHub](https://img.shields.io/github/license/kebiri-isam-dine/UniversityProjects?color=g&style=for-the-badge)
![GitHub last commit](https://img.shields.io/github/last-commit/kebiri-isam-dine/UniversityProjects?color=red&style=for-the-badge)
![GitHub contributors](https://img.shields.io/github/contributors/kebiri-isam-dine/UniversityProjects?color=yellow&style=for-the-badge)

![GitHub Org's stars](https://img.shields.io/github/stars/kebiri-isam-dine?style=social)
![GitHub followers](https://img.shields.io/github/followers/kebiri-isam-dine?style=social)

## About The Project

Ce projet se compose en trois parties :   
➥ Exploitation des principales bases de données de protéines (Protein Data Bank) : NCBI, PDB et PubMed pour ensuite décortiquer un article scientifique basé sur l’application des outils de l’IA sur des séquences nucléotides : ["Classification and specific primer design for accurate detection of SARS-CoV-2 using deep learning"](https://www.nature.com/articles/s41598-020-80363-5)  
➥ Étude des outils BLAST et FASTA et l’alignement des séquences en utilisant ces outils   
➥ Programmer la méthode d’alignement globale par programmation dynamique en python et de déduire l’arbre phylogénique par la méthode UPGMA     

### Keywords

Deep Learning, genopy, ADN, ARN, NCBI, PDB, PubMed, alignement des séquences nucléotides, BLAST, FASTA, alignement global, arbre phylogénique, programmation dynamique, UPGMA

### Built With

* Python 3.6
* genopy 

## Installation

Use the package manager [pip](https://pip.pypa.io/en/stable/) to install :

```python 
pip install genopy 
pip install Bio.Align.Applications
```

## Packages

```python

import genopy 
from Bio.Align.Applications import ClustalOmegaCommandline 
import pandas as pd
import numpy as np
```

## Dataset
Le Dataset séquences de protéines ce trouve [ici](data-sequence.txt)

## Output
- Première partie :
  - Travaille demandé :   
➥ Exploitation des principales bases de données de protéines (Protein Data Bank) : NCBI, PDB et PubMed pour ensuite décortiquer un article scientifique basé sur l’application des outils de l’IA sur des séquences nucléotides   
  - Rendement :   
➥ [Rapport sur l'article Classification and specific primer design for accurate detection of SARS-CoV-2 using deep learning](Output/Rapport01.pdf)   
➥ [Décortication de l'aticle](Output/Décortication_de_l'aticle.pdf)   
  
- Deuxième partie :
  - Travaille demandé :   
➥ Sur le serveur NCBI, identifier toutes les séquences de la protéine de la pénicilline.    
➥ Choisir un type de pénicilline et récupérer la séquence au format FASTA.   
➥ En utilisant la séquence récupérée au format FASTA, faites un BLAST au NCBI.   
➥ A laide de la même séquence au format FASTA, interroger la banque de données SwissProt en recherchant les séquences voisines.   
➥ Est-ce que les séquences trouvées sont les mêmes que celle trouvées par BLAST.    
  - Rendement :   
➥ [Rapport Alignement des séquences par FASTA et BLAST](Output/Rapport02.pdf)   

* Troixième partie :
  * Travaille demandé :   
  ➥ programmer la méthode d’alignement globale par programmation dynamique en python et de déduire l’arbre phylogénique par la méthode UPGMA (avec sub=-1, Id=2 et GAP=2) puis en utilisant l’algorithme claustral déterminer l’alignement global. En déduire l’arbre phylogénétique et comparer les résultats avec les résultats obtenus précédemment   
  ➥ script python : [AAlignement_globale _UPGMA.ipynb](Alignement_globale%20_UPGMA.ipynb)     

## License

[GPL-3.0](https://choosealicense.com/licenses/gpl-3.0/)

## Contact

📫 How to reach me: kebiri.isam.dine@gmail.com

🌐 My Portfolio: <https://kebiri-isam-dine.github.io/>

🔗 Project Link: [https://github.com/Kebiri-isam-dine/UniversityProjects/BioInformatique](https://github.com/Kebiri-isam-dine/UniversityProjects/tree/main/Bio%20informatique)
