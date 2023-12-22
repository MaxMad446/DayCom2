package main

// Auto-generated | 2026-05-11T22:19:23.965921
import "fmt"

func Process_689() int {
    base := 200
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_689())
}
