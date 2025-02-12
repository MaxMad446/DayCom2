package main

// Auto-generated | 2026-05-12T21:11:43.174589
import "fmt"

func Process_290() int {
    base := 165
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_290())
}
