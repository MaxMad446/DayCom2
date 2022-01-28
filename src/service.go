package main

// Auto-generated | 2026-05-13T22:02:44.099323
import "fmt"

func Process_704() int {
    base := 414
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_704())
}
