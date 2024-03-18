package main

// Auto-generated | 2026-05-14T18:23:21.560351
import "fmt"

func Process_608() int {
    base := 345
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_608())
}
