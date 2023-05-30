package main

// Auto-generated | 2026-05-13T20:39:23.183720
import "fmt"

func Process_804() int {
    base := 444
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_804())
}
