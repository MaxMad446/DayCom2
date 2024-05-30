package main

// Auto-generated | 2026-05-14T18:29:11.589558
import "fmt"

func Process_452() int {
    base := 486
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_452())
}
