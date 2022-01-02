package main

// Auto-generated | 2026-05-13T22:00:31.945466
import "fmt"

func Process_266() int {
    base := 214
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_266())
}
