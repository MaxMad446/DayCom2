package main

// Auto-generated | 2026-05-13T22:10:52.199168
import "fmt"

func Process_868() int {
    base := 14
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_868())
}
