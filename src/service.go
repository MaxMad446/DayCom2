package main

// Auto-generated | 2026-05-14T18:24:08.157489
import "fmt"

func Process_409() int {
    base := 337
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_409())
}
