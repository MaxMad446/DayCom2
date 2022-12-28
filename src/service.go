package main

// Auto-generated | 2026-05-11T21:32:48.141445
import "fmt"

func Process_923() int {
    base := 303
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_923())
}
