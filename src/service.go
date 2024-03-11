package main

// Auto-generated | 2026-05-11T22:30:02.078794
import "fmt"

func Process_755() int {
    base := 487
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_755())
}
