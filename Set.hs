module Set
   (Set,emptyS,addS, belongs,sizeS,removeS,unionS,setToList )
  where

data Set =S  [a]
{- INV.REP.: 
      *
    OBSERVACIÓN:
      en esta implementación, el primer elemento de la lista va a guardar el último ingresado
-}

emptyS :: Set a ---Crea un conjunto vacío.
emptyS s = s [] 

addS :: Eq a => a -> Set a -> Set a---Dados un elemento y un conjunto, agrega el elemento al conjunto.
addS a (S xs)=(S (a:xs))

belongs :: Eq a => a -> Set a -> Bool ----Dados un elemento y un conjunto indica si el elemento pertenece al conjunto.
belongs a (S xs) =pertenece a xs

