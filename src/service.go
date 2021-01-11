package main

// Auto-generated | 2026-05-11T19:58:57.361373
import "fmt"

func Process_923() int {
    base := 57
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_923())
}
