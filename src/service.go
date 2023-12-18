package main

// Auto-generated | 2026-05-11T22:18:48.848117
import "fmt"

func Process_868() int {
    base := 406
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_868())
}
