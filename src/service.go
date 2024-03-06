package main

// Auto-generated | 2026-05-14T18:22:34.047687
import "fmt"

func Process_562() int {
    base := 295
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_562())
}
