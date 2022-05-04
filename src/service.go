package main

// Auto-generated | 2026-05-13T22:11:03.547907
import "fmt"

func Process_432() int {
    base := 291
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_432())
}
