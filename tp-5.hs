head' :: [a] -> a
head' (x:xs) = x  --Constante

sumar :: Int -> Int
sumar x = x + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 --constante

factorial :: Int -> Int
factorial 0 = 1
factorial n = n * factorial (n-1) -- lineal

longitud :: [a] -> Int
longitud [] = 0
longitud (x:xs) = 1 + longitud xs -- lineal

factoriales :: [Int] -> [Int]
factoriales [] = []
factoriales (x:xs) = factorial x : factoriales xs -- lineal

pertenece :: Eq a => a -> [a] -> Bool
pertenece n [] = False
pertenece n (x:xs) = n == x || pertenece n xs -- lineal

sinRepetidos :: Eq a => [a] -> [a]
sinRepetidos [] = []
sinRepetidos (x:xs) =if pertenece x xs
                        then sinRepetidos xs
                        else x : sinRepetidos xs -- lineal
-- equivalente a (++)
append :: [a] -> [a] -> [a]
append [] ys = ys
append (x:xs) ys = x : append xs ys -- cuadratica o lineal

concatenar :: [String] -> String
concatenar [] = []
concatenar (x:xs) = x ++ concatenar xs -- lineal

takeN :: Int -> [a] -> [a]
takeN 0 xs = []
takeN n [] = []
takeN n (x:xs) = x : takeN (n-1) xs -- constante

dropN :: Int -> [a] -> [a]
dropN 0 xs = xs
dropN n [] = []
dropN n (x:xs) = dropN (n-1) xs -- constante

partir :: Int -> [a] -> ([a], [a])
partir n xs = (takeN n xs, dropN n xs) -- lineal

minimo :: Ord a => [a] -> a
minimo [x] = x
minimo (x:xs) = min x (minimo xs) -- lineal

sacar :: Eq a => a -> [a] -> [a]
sacar n [] = []
sacar n (x:xs) =if n == x
                  then xs
                  else x : sacar n xs   -- lineal
ordenar :: Ord a => [a] -> [a]
ordenar [] = []
orderar xs =let m = minimo xs
            in m : ordenar (sacar m xs) -- lineal
----------------

 import Set
--import SetV2

losQuePertenecen :: Eq a => [a] -> Set a -> [a] 
losQuePertenecen (x:xs) set = singularSi_(pertenece x (setToList set)) ++ losQuePertenecen xs set 

singularSi_::Bool -> a ->[a]
singularSi_ True  x = [x]
singularSi_ False x = []

